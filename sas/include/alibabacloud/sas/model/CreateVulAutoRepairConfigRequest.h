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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEVULAUTOREPAIRCONFIGREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEVULAUTOREPAIRCONFIGREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT CreateVulAutoRepairConfigRequest : public RpcServiceRequest {
public:
	struct VulAutoRepairConfigList {
		std::string aliasName;
		std::string name;
	};
	CreateVulAutoRepairConfigRequest();
	~CreateVulAutoRepairConfigRequest();
	std::string getReason() const;
	void setReason(const std::string &reason);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::vector<VulAutoRepairConfigList> getVulAutoRepairConfigList() const;
	void setVulAutoRepairConfigList(const std::vector<VulAutoRepairConfigList> &vulAutoRepairConfigList);

private:
	std::string reason_;
	std::string type_;
	std::string sourceIp_;
	std::vector<VulAutoRepairConfigList> vulAutoRepairConfigList_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEVULAUTOREPAIRCONFIGREQUEST_H_
