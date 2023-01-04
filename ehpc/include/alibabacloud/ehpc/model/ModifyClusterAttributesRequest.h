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

#ifndef ALIBABACLOUD_EHPC_MODEL_MODIFYCLUSTERATTRIBUTESREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_MODIFYCLUSTERATTRIBUTESREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ModifyClusterAttributesRequest : public RpcServiceRequest {
public:
	ModifyClusterAttributesRequest();
	~ModifyClusterAttributesRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRamRoleName() const;
	void setRamRoleName(const std::string &ramRoleName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getImageOwnerAlias() const;
	void setImageOwnerAlias(const std::string &imageOwnerAlias);
	std::vector<std::string> getRamNodeTypes() const;
	void setRamNodeTypes(const std::vector<std::string> &ramNodeTypes);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string imageId_;
	std::string description_;
	std::string ramRoleName_;
	std::string clusterId_;
	std::string accessKeyId_;
	std::string imageOwnerAlias_;
	std::vector<std::string> ramNodeTypes_;
	std::string password_;
	std::string name_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_MODIFYCLUSTERATTRIBUTESREQUEST_H_
