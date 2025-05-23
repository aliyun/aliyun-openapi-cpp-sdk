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

#ifndef ALIBABACLOUD_CSAS_MODEL_CREATEAPPROVALPROCESSREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_CREATEAPPROVALPROCESSREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT CreateApprovalProcessRequest : public RpcServiceRequest {
public:
	struct MatchSchemas {
		std::string domainBlacklistSchemaId;
		std::string softwareBlockSchemaId;
		std::string peripheralBlockSchemaId;
		std::string deviceRegistrationSchemaId;
		std::string dlpSendSchemaId;
		std::string domainWhitelistSchemaId;
		std::string appUninstallSchemaId;
	};
	CreateApprovalProcessRequest();
	~CreateApprovalProcessRequest();
	std::vector<std::vector<std::string>> getProcessNodes() const;
	void setProcessNodes(const std::vector<std::vector<std::string>> &processNodes);
	MatchSchemas getMatchSchemas() const;
	void setMatchSchemas(const MatchSchemas &matchSchemas);
	std::string getProcessName() const;
	void setProcessName(const std::string &processName);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);

private:
	std::vector<std::vector<std::string>> processNodes_;
	MatchSchemas matchSchemas_;
	std::string processName_;
	std::string description_;
	std::string sourceIp_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_CREATEAPPROVALPROCESSREQUEST_H_
