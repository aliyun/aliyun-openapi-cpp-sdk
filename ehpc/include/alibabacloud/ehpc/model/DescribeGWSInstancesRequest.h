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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSINSTANCESREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSINSTANCESREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT DescribeGWSInstancesRequest : public RpcServiceRequest {
public:
	DescribeGWSInstancesRequest();
	~DescribeGWSInstancesRequest();
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getUserUid() const;
	void setUserUid(long userUid);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string clusterId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string instanceId_;
	int pageSize_;
	long userUid_;
	std::string userName_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEGWSINSTANCESREQUEST_H_
