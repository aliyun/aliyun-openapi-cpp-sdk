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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMEDIALISTREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMEDIALISTREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryMediaListRequest : public RpcServiceRequest {
public:
	QueryMediaListRequest();
	~QueryMediaListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getIncludeSummaryList() const;
	void setIncludeSummaryList(bool includeSummaryList);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getMediaIds() const;
	void setMediaIds(const std::string &mediaIds);
	bool getIncludePlayList() const;
	void setIncludePlayList(bool includePlayList);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	bool getIncludeSnapshotList() const;
	void setIncludeSnapshotList(bool includeSnapshotList);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getIncludeMediaInfo() const;
	void setIncludeMediaInfo(bool includeMediaInfo);

private:
	long resourceOwnerId_;
	bool includeSummaryList_;
	std::string accessKeyId_;
	std::string mediaIds_;
	bool includePlayList_;
	std::string resourceOwnerAccount_;
	bool includeSnapshotList_;
	std::string ownerAccount_;
	long ownerId_;
	bool includeMediaInfo_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMEDIALISTREQUEST_H_
