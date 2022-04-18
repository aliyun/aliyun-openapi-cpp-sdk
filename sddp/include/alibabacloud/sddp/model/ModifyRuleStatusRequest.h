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

#ifndef ALIBABACLOUD_SDDP_MODEL_MODIFYRULESTATUSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_MODIFYRULESTATUSREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT ModifyRuleStatusRequest : public RpcServiceRequest {
public:
	ModifyRuleStatusRequest();
	~ModifyRuleStatusRequest();
	int getFeatureType() const;
	void setFeatureType(int featureType);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getIds() const;
	void setIds(const std::string &ids);
	long getId() const;
	void setId(long id);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getStatus() const;
	void setStatus(int status);

private:
	int featureType_;
	std::string sourceIp_;
	std::string ids_;
	long id_;
	std::string lang_;
	int status_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_MODIFYRULESTATUSREQUEST_H_
