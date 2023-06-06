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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTINSTANCECATALOGREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTINSTANCECATALOGREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListInstanceCatalogRequest : public RpcServiceRequest {
public:
	ListInstanceCatalogRequest();
	~ListInstanceCatalogRequest();
	std::vector<long> getStandardIds() const;
	void setStandardIds(const std::vector<long> &standardIds);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<std::string> getTypes() const;
	void setTypes(const std::vector<std::string> &types);
	std::vector<long> getRequirementIds() const;
	void setRequirementIds(const std::vector<long> &requirementIds);

private:
	std::vector<long> standardIds_;
	std::string sourceIp_;
	std::string regionId_;
	std::string lang_;
	std::vector<std::string> types_;
	std::vector<long> requirementIds_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTINSTANCECATALOGREQUEST_H_
