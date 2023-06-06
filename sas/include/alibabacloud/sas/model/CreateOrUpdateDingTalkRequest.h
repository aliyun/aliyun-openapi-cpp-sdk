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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEORUPDATEDINGTALKREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEORUPDATEDINGTALKREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT CreateOrUpdateDingTalkRequest : public RpcServiceRequest {
public:
	CreateOrUpdateDingTalkRequest();
	~CreateOrUpdateDingTalkRequest();
	std::string getRuleActionName() const;
	void setRuleActionName(const std::string &ruleActionName);
	std::string getGroupIdList() const;
	void setGroupIdList(const std::string &groupIdList);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getId() const;
	void setId(long id);
	std::string getSendUrl() const;
	void setSendUrl(const std::string &sendUrl);
	long getIntervalTime() const;
	void setIntervalTime(long intervalTime);
	std::string getDingTalkLang() const;
	void setDingTalkLang(const std::string &dingTalkLang);
	std::string getConfigList() const;
	void setConfigList(const std::string &configList);

private:
	std::string ruleActionName_;
	std::string groupIdList_;
	std::string sourceIp_;
	long id_;
	std::string sendUrl_;
	long intervalTime_;
	std::string dingTalkLang_;
	std::string configList_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEORUPDATEDINGTALKREQUEST_H_
