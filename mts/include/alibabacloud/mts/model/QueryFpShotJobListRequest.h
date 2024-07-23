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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYFPSHOTJOBLISTREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYFPSHOTJOBLISTREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryFpShotJobListRequest : public RpcServiceRequest {
public:
	QueryFpShotJobListRequest();
	~QueryFpShotJobListRequest();
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
	std::string getState() const;
	void setState(const std::string &state);
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
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getPrimaryKeyList() const;
	void setPrimaryKeyList(const std::string &primaryKeyList);
	std::string getJobIds() const;
	void setJobIds(const std::string &jobIds);

private:
	long resourceOwnerId_;
	std::string nextPageToken_;
	std::string startOfJobCreatedTimeRange_;
	std::string accessKeyId_;
	std::string userData_;
	std::string state_;
	std::string endOfJobCreatedTimeRange_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long maximumPageSize_;
	long ownerId_;
	std::string pipelineId_;
	std::string primaryKeyList_;
	std::string jobIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYFPSHOTJOBLISTREQUEST_H_
