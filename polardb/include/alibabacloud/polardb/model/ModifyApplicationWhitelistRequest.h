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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYAPPLICATIONWHITELISTREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYAPPLICATIONWHITELISTREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyApplicationWhitelistRequest : public RpcServiceRequest {
public:
	ModifyApplicationWhitelistRequest();
	~ModifyApplicationWhitelistRequest();
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	std::string getSecurityIPArrayName() const;
	void setSecurityIPArrayName(const std::string &securityIPArrayName);
	std::string getModifyMode() const;
	void setModifyMode(const std::string &modifyMode);
	std::string getComponentId() const;
	void setComponentId(const std::string &componentId);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getSecurityGroups() const;
	void setSecurityGroups(const std::string &securityGroups);

private:
	std::string applicationId_;
	std::string securityIPArrayName_;
	std::string modifyMode_;
	std::string componentId_;
	std::string securityIPList_;
	std::string securityGroups_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYAPPLICATIONWHITELISTREQUEST_H_
