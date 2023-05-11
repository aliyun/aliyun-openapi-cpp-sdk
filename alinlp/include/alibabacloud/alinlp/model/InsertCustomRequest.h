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

#ifndef ALIBABACLOUD_ALINLP_MODEL_INSERTCUSTOMREQUEST_H_
#define ALIBABACLOUD_ALINLP_MODEL_INSERTCUSTOMREQUEST_H_

#include <alibabacloud/alinlp/AlinlpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alinlp {
namespace Model {
class ALIBABACLOUD_ALINLP_EXPORT InsertCustomRequest : public RpcServiceRequest {
public:
	InsertCustomRequest();
	~InsertCustomRequest();
	std::string getCustomUrl() const;
	void setCustomUrl(const std::string &customUrl);
	std::string getRegUrl() const;
	void setRegUrl(const std::string &regUrl);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	std::string getRegFileName() const;
	void setRegFileName(const std::string &regFileName);
	std::string getCustomFileName() const;
	void setCustomFileName(const std::string &customFileName);
	int getApiId() const;
	void setApiId(int apiId);

private:
	std::string customUrl_;
	std::string regUrl_;
	std::string serviceCode_;
	std::string regFileName_;
	std::string customFileName_;
	int apiId_;
};
} // namespace Model
} // namespace Alinlp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALINLP_MODEL_INSERTCUSTOMREQUEST_H_
