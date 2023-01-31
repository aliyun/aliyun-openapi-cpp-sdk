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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEECGRANTRELATIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEECGRANTRELATIONREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeEcGrantRelationRequest : public RpcServiceRequest {
public:
	DescribeEcGrantRelationRequest();
	~DescribeEcGrantRelationRequest();
	std::string getVbrRegionNo() const;
	void setVbrRegionNo(const std::string &vbrRegionNo);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);

private:
	std::string vbrRegionNo_;
	long pageNumber_;
	std::string instanceId_;
	long pageSize_;
	std::string instanceType_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEECGRANTRELATIONREQUEST_H_
