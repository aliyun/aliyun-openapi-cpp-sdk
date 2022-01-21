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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTEXPORTEROUTPUTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTEXPORTEROUTPUTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT PutExporterOutputRequest : public RpcServiceRequest {
public:
	PutExporterOutputRequest();
	~PutExporterOutputRequest();
	std::string getDestName() const;
	void setDestName(const std::string &destName);
	std::string getConfigJson() const;
	void setConfigJson(const std::string &configJson);
	std::string getDestType() const;
	void setDestType(const std::string &destType);
	std::string getDesc() const;
	void setDesc(const std::string &desc);

private:
	std::string destName_;
	std::string configJson_;
	std::string destType_;
	std::string desc_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_PUTEXPORTEROUTPUTREQUEST_H_
