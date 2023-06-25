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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_MODIFYREMARKREQUEST_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_MODIFYREMARKREQUEST_H_

#include <alibabacloud/ddosbgp/DdosbgpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddosbgp {
namespace Model {
class ALIBABACLOUD_DDOSBGP_EXPORT ModifyRemarkRequest : public RpcServiceRequest {
public:
	ModifyRemarkRequest();
	~ModifyRemarkRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	std::string remark_;
	std::string resourceGroupId_;
	std::string instanceId_;
	std::string sourceIp_;
	std::string regionId_;
	std::string lang_;
};
} // namespace Model
} // namespace Ddosbgp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_MODIFYREMARKREQUEST_H_
