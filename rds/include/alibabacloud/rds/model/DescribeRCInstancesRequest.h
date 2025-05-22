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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCESREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCESREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCInstancesRequest : public RpcServiceRequest {
public:
	DescribeRCInstancesRequest();
	~DescribeRCInstancesRequest();
	std::string getHostIp() const;
	void setHostIp(const std::string &hostIp);
	std::string getPublicIp() const;
	void setPublicIp(const std::string &publicIp);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string hostIp_;
	std::string publicIp_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string regionId_;
	int pageSize_;
	std::string tag_;
	std::string instanceId_;
	std::string instanceIds_;
	std::string vpcId_;
	std::string status_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCESREQUEST_H_
