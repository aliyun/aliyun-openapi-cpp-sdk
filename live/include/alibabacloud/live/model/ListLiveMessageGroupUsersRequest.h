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

#ifndef ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPUSERSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPUSERSREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT ListLiveMessageGroupUsersRequest : public RpcServiceRequest {
public:
	ListLiveMessageGroupUsersRequest();
	~ListLiveMessageGroupUsersRequest();
	int getSortType() const;
	void setSortType(int sortType);
	long getNextPageToken() const;
	void setNextPageToken(long nextPageToken);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getDataCenter() const;
	void setDataCenter(const std::string &dataCenter);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	int sortType_;
	long nextPageToken_;
	std::string groupId_;
	std::string dataCenter_;
	std::string appId_;
	int pageSize_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPUSERSREQUEST_H_
