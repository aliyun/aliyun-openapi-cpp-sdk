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

#ifndef ALIBABACLOUD_VOD_MODEL_SEARCHEDITINGPROJECTREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SEARCHEDITINGPROJECTREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT SearchEditingProjectRequest : public RpcServiceRequest {
public:
	SearchEditingProjectRequest();
	~SearchEditingProjectRequest();
	std::string getResourceOwnerId() const;
	void setResourceOwnerId(const std::string &resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string resourceOwnerId_;
	std::string startTime_;
	std::string title_;
	std::string accessKeyId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	std::string ownerId_;
	int pageNo_;
	std::string sortBy_;
	std::string status_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_SEARCHEDITINGPROJECTREQUEST_H_
