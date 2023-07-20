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

#ifndef ALIBABACLOUD_SAS_MODEL_ADDIMAGEVULWHITELISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_ADDIMAGEVULWHITELISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT AddImageVulWhiteListRequest : public RpcServiceRequest {
public:
	AddImageVulWhiteListRequest();
	~AddImageVulWhiteListRequest();
	std::string getReason() const;
	void setReason(const std::string &reason);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getWhitelist() const;
	void setWhitelist(const std::string &whitelist);
	std::string getTarget() const;
	void setTarget(const std::string &target);

private:
	std::string reason_;
	std::string type_;
	std::string lang_;
	std::string whitelist_;
	std::string target_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_ADDIMAGEVULWHITELISTREQUEST_H_
