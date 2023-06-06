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

#ifndef ALIBABACLOUD_SAS_MODEL_OPERATEIMAGEBASELINEWHITELISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_OPERATEIMAGEBASELINEWHITELISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT OperateImageBaselineWhitelistRequest : public RpcServiceRequest {
public:
	OperateImageBaselineWhitelistRequest();
	~OperateImageBaselineWhitelistRequest();
	std::string getBaselineItemKeyList() const;
	void setBaselineItemKeyList(const std::string &baselineItemKeyList);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::vector<std::string> getScanRange() const;
	void setScanRange(const std::vector<std::string> &scanRange);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getImageUuid() const;
	void setImageUuid(const std::string &imageUuid);
	std::string getOperation() const;
	void setOperation(const std::string &operation);

private:
	std::string baselineItemKeyList_;
	std::string sourceIp_;
	std::vector<std::string> scanRange_;
	std::string lang_;
	std::string imageUuid_;
	std::string operation_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_OPERATEIMAGEBASELINEWHITELISTREQUEST_H_
