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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_GETQUOTATEMPLATESERVICESTATUSREQUEST_H_
#define ALIBABACLOUD_QUOTAS_MODEL_GETQUOTATEMPLATESERVICESTATUSREQUEST_H_

#include <alibabacloud/quotas/QuotasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quotas {
namespace Model {
class ALIBABACLOUD_QUOTAS_EXPORT GetQuotaTemplateServiceStatusRequest : public RpcServiceRequest {
public:
	GetQuotaTemplateServiceStatusRequest();
	~GetQuotaTemplateServiceStatusRequest();
	std::string getOriginalContext() const;
	void setOriginalContext(const std::string &originalContext);
	std::string getResourceDirectoryId() const;
	void setResourceDirectoryId(const std::string &resourceDirectoryId);

private:
	std::string originalContext_;
	std::string resourceDirectoryId_;
};
} // namespace Model
} // namespace Quotas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUOTAS_MODEL_GETQUOTATEMPLATESERVICESTATUSREQUEST_H_
