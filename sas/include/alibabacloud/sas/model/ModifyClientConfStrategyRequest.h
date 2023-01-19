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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYCLIENTCONFSTRATEGYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYCLIENTCONFSTRATEGYREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyClientConfStrategyRequest : public RpcServiceRequest {
public:
	ModifyClientConfStrategyRequest();
	~ModifyClientConfStrategyRequest();
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getResourceDirectoryAccountId() const;
	void setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId);
	std::string getTagValue() const;
	void setTagValue(const std::string &tagValue);
	std::string getTagExt() const;
	void setTagExt(const std::string &tagExt);
	std::vector<std::string> getUuids() const;
	void setUuids(const std::vector<std::string> &uuids);

private:
	std::string uuid_;
	std::string sourceIp_;
	std::string tag_;
	std::string resourceDirectoryAccountId_;
	std::string tagValue_;
	std::string tagExt_;
	std::vector<std::string> uuids_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYCLIENTCONFSTRATEGYREQUEST_H_
