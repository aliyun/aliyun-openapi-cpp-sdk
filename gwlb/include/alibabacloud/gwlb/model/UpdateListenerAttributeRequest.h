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

#ifndef ALIBABACLOUD_GWLB_MODEL_UPDATELISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_UPDATELISTENERATTRIBUTEREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT UpdateListenerAttributeRequest : public RpcServiceRequest {
public:
	UpdateListenerAttributeRequest();
	~UpdateListenerAttributeRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getListenerDescription() const;
	void setListenerDescription(const std::string &listenerDescription);

private:
	std::string clientToken_;
	std::string serverGroupId_;
	std::string listenerId_;
	bool dryRun_;
	std::string listenerDescription_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_UPDATELISTENERATTRIBUTEREQUEST_H_
