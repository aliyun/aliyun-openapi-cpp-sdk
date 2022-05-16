/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPSERVICEDETAILREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPSERVICEDETAILREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT DescribeAppServiceDetailRequest : public RoaServiceRequest {
public:
	DescribeAppServiceDetailRequest();
	~DescribeAppServiceDetailRequest();
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getServiceVersion() const;
	void setServiceVersion(const std::string &serviceVersion);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::string getServiceGroup() const;
	void setServiceGroup(const std::string &serviceGroup);

private:
	std::string serviceType_;
	std::string appId_;
	std::string serviceVersion_;
	std::string serviceName_;
	std::string serviceGroup_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPSERVICEDETAILREQUEST_H_
