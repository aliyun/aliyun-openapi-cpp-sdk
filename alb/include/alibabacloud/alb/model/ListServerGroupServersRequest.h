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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTSERVERGROUPSERVERSREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_LISTSERVERGROUPSERVERSREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT ListServerGroupServersRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListServerGroupServersRequest();
	~ListServerGroupServersRequest();
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getServerIp() const;
	void setServerIp(const std::string &serverIp);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getServerId() const;
	void setServerId(const std::string &serverId);
	std::vector<std::string> getServerIds() const;
	void setServerIds(const std::vector<std::string> &serverIds);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string serverGroupId_;
	std::string nextToken_;
	std::string serverIp_;
	std::vector<Tag> tag_;
	std::string serverId_;
	std::vector<std::string> serverIds_;
	int maxResults_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_LISTSERVERGROUPSERVERSREQUEST_H_
