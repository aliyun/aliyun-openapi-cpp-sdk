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

#ifndef ALIBABACLOUD_SAS_MODEL_IGNORECHECKITEMSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_IGNORECHECKITEMSREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT IgnoreCheckItemsRequest : public RpcServiceRequest {
public:
	struct CheckAndRiskTypeList {
		std::string riskType;
		long checkId;
	};
	IgnoreCheckItemsRequest();
	~IgnoreCheckItemsRequest();
	std::string getReason() const;
	void setReason(const std::string &reason);
	int getType() const;
	void setType(int type);
	std::vector<std::string> getUuidList() const;
	void setUuidList(const std::vector<std::string> &uuidList);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<CheckAndRiskTypeList> getCheckAndRiskTypeList() const;
	void setCheckAndRiskTypeList(const std::vector<CheckAndRiskTypeList> &checkAndRiskTypeList);

private:
	std::string reason_;
	int type_;
	std::vector<std::string> uuidList_;
	std::string lang_;
	std::vector<CheckAndRiskTypeList> checkAndRiskTypeList_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_IGNORECHECKITEMSREQUEST_H_
