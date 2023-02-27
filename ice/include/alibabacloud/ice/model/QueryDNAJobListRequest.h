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

#ifndef ALIBABACLOUD_ICE_MODEL_QUERYDNAJOBLISTREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_QUERYDNAJOBLISTREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT QueryDNAJobListRequest : public RpcServiceRequest {
public:
	QueryDNAJobListRequest();
	~QueryDNAJobListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNextPageToken() const;
	void setNextPageToken(const std::string &nextPageToken);
	std::string getStartOfJobCreatedTimeRange() const;
	void setStartOfJobCreatedTimeRange(const std::string &startOfJobCreatedTimeRange);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getEndOfJobCreatedTimeRange() const;
	void setEndOfJobCreatedTimeRange(const std::string &endOfJobCreatedTimeRange);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getMaximumPageSize() const;
	void setMaximumPageSize(long maximumPageSize);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getJobIds() const;
	void setJobIds(const std::string &jobIds);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	std::string nextPageToken_;
	std::string startOfJobCreatedTimeRange_;
	std::string accessKeyId_;
	std::string userData_;
	std::string endOfJobCreatedTimeRange_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long maximumPageSize_;
	long ownerId_;
	std::string jobIds_;
	std::string status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_QUERYDNAJOBLISTREQUEST_H_
