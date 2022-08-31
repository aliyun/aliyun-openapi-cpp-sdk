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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHTASKSREQUEST_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHTASKSREQUEST_H_

#include <alibabacloud/scdn/ScdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Scdn {
namespace Model {
class ALIBABACLOUD_SCDN_EXPORT DescribeScdnRefreshTasksRequest : public RpcServiceRequest {
public:
	DescribeScdnRefreshTasksRequest();
	~DescribeScdnRefreshTasksRequest();
	std::string getObjectPath() const;
	void setObjectPath(const std::string &objectPath);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getObjectType() const;
	void setObjectType(const std::string &objectType);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string objectPath_;
	std::string startTime_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string securityToken_;
	int pageSize_;
	std::string objectType_;
	std::string taskId_;
	std::string domainName_;
	std::string endTime_;
	long ownerId_;
	std::string status_;
};
} // namespace Model
} // namespace Scdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHTASKSREQUEST_H_
