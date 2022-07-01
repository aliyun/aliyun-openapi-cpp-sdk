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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_MODIFYWEBCCRULEREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_MODIFYWEBCCRULEREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT ModifyWebCCRuleRequest : public RpcServiceRequest {
public:
	ModifyWebCCRuleRequest();
	~ModifyWebCCRuleRequest();
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getAct() const;
	void setAct(const std::string &act);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getCount() const;
	void setCount(int count);
	int getTtl() const;
	void setTtl(int ttl);
	std::string getUri() const;
	void setUri(const std::string &uri);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	std::string getName() const;
	void setName(const std::string &name);
	int getInterval() const;
	void setInterval(int interval);

private:
	std::string mode_;
	std::string resourceGroupId_;
	std::string act_;
	std::string sourceIp_;
	int count_;
	int ttl_;
	std::string uri_;
	std::string domain_;
	std::string name_;
	int interval_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_MODIFYWEBCCRULEREQUEST_H_
