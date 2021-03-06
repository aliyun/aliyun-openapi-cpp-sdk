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

#ifndef ALIBABACLOUD_ALB_MODEL_ASSOCIATEACLSWITHLISTENERREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_ASSOCIATEACLSWITHLISTENERREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT AssociateAclsWithListenerRequest : public RpcServiceRequest {
public:
	AssociateAclsWithListenerRequest();
	~AssociateAclsWithListenerRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getAclIds() const;
	void setAclIds(const std::vector<std::string> &aclIds);
	std::string getAclType() const;
	void setAclType(const std::string &aclType);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);

private:
	std::string clientToken_;
	std::vector<std::string> aclIds_;
	std::string aclType_;
	std::string listenerId_;
	bool dryRun_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_ASSOCIATEACLSWITHLISTENERREQUEST_H_
