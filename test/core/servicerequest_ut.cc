
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "gtest/gtest.h"
#include "alibabacloud/core/ServiceRequest.h"

using namespace std;
using namespace AlibabaCloud;

namespace {
  class TestServiceRequest: public ServiceRequest {
   public:
    explicit TestServiceRequest(const std::string &product, const std::string &version):
      ServiceRequest(product, version)
    {}
    explicit TestServiceRequest(const ServiceRequest &other):
      ServiceRequest(other)
    {}
    explicit TestServiceRequest(ServiceRequest &&other):
      ServiceRequest(other)
    {}

    using ServiceRequest::addParameter;
    using ServiceRequest::removeParameter;
    using ServiceRequest::parameter;
    using ServiceRequest::setContent;
    using ServiceRequest::setParameter;
    using ServiceRequest::setParameters;
    using ServiceRequest::setResourcePath;
    using ServiceRequest::setProduct;
    using ServiceRequest::setVersion;
  };

  TEST(ServiceRequest, basic) {

    TestServiceRequest sr1("ECS", "1.0");
    TestServiceRequest sr2(sr1);

    sr1.addParameter("k1", "v1");
    sr2.addParameter("k2", "v2");

    ServiceRequest::ParameterCollection p1 = sr1.parameters();
    ServiceRequest::ParameterCollection p2 = sr2.parameters();

    EXPECT_TRUE(sr1.parameter("k1") == "v1");
    sr1.addParameter("kx", "vx");
    EXPECT_TRUE(sr1.parameter("kx") == "vx");

    EXPECT_TRUE(sr1.parameters().size() == 2);

    sr1.removeParameter("k1");
    EXPECT_TRUE(sr1.parameters().size() == 1);

    sr1.setParameter("ka", "va");
    EXPECT_TRUE(sr1.parameter("ka") == "va");

    sr1.setContent("123456", 6);
    EXPECT_TRUE(sr1.contentSize() == 6);
    EXPECT_TRUE(sr1.hasContent() == true);
    EXPECT_TRUE(strncmp(sr1.content(), "123456", 6) == 0);

    sr1.setContent("aliyunsdk", 9);
    EXPECT_TRUE(sr1.contentSize() == 9);
    EXPECT_TRUE(sr1.hasContent() == true);
    EXPECT_TRUE(strncmp(sr1.content(), "aliyunsdk", 9) == 0);

    sr1.setProduct("OSS");
    EXPECT_TRUE(sr1.product() == "OSS");

    sr1.setVersion("3.0");
    EXPECT_TRUE(sr1.version() == "3.0");

    sr1.setResourcePath("http://abc.com/a/b/c");
    EXPECT_TRUE(sr1.resourcePath() == "http://abc.com/a/b/c");

    ServiceRequest::ParameterCollection ps;
    ps["km"] = "vm";
    ps["kn"] = "vn";
    sr1.setParameters(ps);
    ServiceRequest::ParameterCollection pc = sr1.parameters();
    EXPECT_TRUE(pc.at("km") == "vm");
    EXPECT_TRUE(pc.at("kn") == "vn");
  }
}
