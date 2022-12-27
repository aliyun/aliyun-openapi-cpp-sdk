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

#ifndef ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT ModifyInstanceAttributeRequest : public RpcServiceRequest {
public:
	ModifyInstanceAttributeRequest();
	~ModifyInstanceAttributeRequest();
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);

private:
	std::string userData_;
	std::string password_;
	std::string hostName_;
	std::string instanceId_;
	std::string instanceName_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
