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

#ifndef ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSERVERSREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSERVERSREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT ListServerGroupServersRequest : public RpcServiceRequest {
public:
	ListServerGroupServersRequest();
	~ListServerGroupServersRequest();
	int getSkip() const;
	void setSkip(int skip);
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getServerIds() const;
	void setServerIds(const std::vector<std::string> &serverIds);
	std::vector<std::string> getServerIps() const;
	void setServerIps(const std::vector<std::string> &serverIps);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	int skip_;
	std::string serverGroupId_;
	std::string nextToken_;
	std::vector<std::string> serverIds_;
	std::vector<std::string> serverIps_;
	int maxResults_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSERVERSREQUEST_H_
