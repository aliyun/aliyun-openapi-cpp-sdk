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

#ifndef ALIBABACLOUD_LIVE_MODEL_CHECKSERVICEFORROLEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CHECKSERVICEFORROLEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CheckServiceForRoleRequest : public RpcServiceRequest {
public:
	CheckServiceForRoleRequest();
	~CheckServiceForRoleRequest();
	std::string getAccountId() const;
	void setAccountId(const std::string &accountId);
	std::string getSPIRegionId() const;
	void setSPIRegionId(const std::string &sPIRegionId);
	std::string getRoleArn() const;
	void setRoleArn(const std::string &roleArn);
	std::string getDeletionTaskId() const;
	void setDeletionTaskId(const std::string &deletionTaskId);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);

private:
	std::string accountId_;
	std::string sPIRegionId_;
	std::string roleArn_;
	std::string deletionTaskId_;
	std::string serviceName_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CHECKSERVICEFORROLEREQUEST_H_
