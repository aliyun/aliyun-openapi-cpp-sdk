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

#ifndef ALIBABACLOUD_MSE_MODEL_EXPORTNACOSCONFIGREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_EXPORTNACOSCONFIGREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ExportNacosConfigRequest : public RpcServiceRequest {
public:
	ExportNacosConfigRequest();
	~ExportNacosConfigRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getDataIds() const;
	void setDataIds(const std::string &dataIds);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getGroup() const;
	void setGroup(const std::string &group);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDataId() const;
	void setDataId(const std::string &dataId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getIds() const;
	void setIds(const std::string &ids);

private:
	std::string mseSessionId_;
	std::string dataIds_;
	std::string appName_;
	std::string namespaceId_;
	std::string group_;
	std::string instanceId_;
	std::string dataId_;
	std::string acceptLanguage_;
	std::string ids_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_EXPORTNACOSCONFIGREQUEST_H_
