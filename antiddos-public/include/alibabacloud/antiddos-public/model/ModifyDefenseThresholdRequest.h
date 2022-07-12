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

#ifndef ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_MODIFYDEFENSETHRESHOLDREQUEST_H_
#define ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_MODIFYDEFENSETHRESHOLDREQUEST_H_

#include <alibabacloud/antiddos-public/Antiddos_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Antiddos_public {
namespace Model {
class ALIBABACLOUD_ANTIDDOS_PUBLIC_EXPORT ModifyDefenseThresholdRequest : public RpcServiceRequest {
public:
	ModifyDefenseThresholdRequest();
	~ModifyDefenseThresholdRequest();
	std::string getInternetIp() const;
	void setInternetIp(const std::string &internetIp);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getDdosRegionId() const;
	void setDdosRegionId(const std::string &ddosRegionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getBps() const;
	void setBps(int bps);
	int getPps() const;
	void setPps(int pps);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getIsAuto() const;
	void setIsAuto(bool isAuto);

private:
	std::string internetIp_;
	std::string sourceIp_;
	std::string ddosRegionId_;
	std::string instanceType_;
	std::string lang_;
	int bps_;
	int pps_;
	std::string instanceId_;
	bool isAuto_;
};
} // namespace Model
} // namespace Antiddos_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_MODIFYDEFENSETHRESHOLDREQUEST_H_
