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

#ifndef ALIBABACLOUD_ALINLP_MODEL_GETWECHECOMREQUEST_H_
#define ALIBABACLOUD_ALINLP_MODEL_GETWECHECOMREQUEST_H_

#include <alibabacloud/alinlp/AlinlpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alinlp {
namespace Model {
class ALIBABACLOUD_ALINLP_EXPORT GetWeChEcomRequest : public RpcServiceRequest {
public:
	GetWeChEcomRequest();
	~GetWeChEcomRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	std::string getSize() const;
	void setSize(const std::string &size);
	std::string getTokenizerId() const;
	void setTokenizerId(const std::string &tokenizerId);
	std::string getText() const;
	void setText(const std::string &text);
	std::string getOperation() const;
	void setOperation(const std::string &operation);

private:
	std::string type_;
	std::string serviceCode_;
	std::string size_;
	std::string tokenizerId_;
	std::string text_;
	std::string operation_;
};
} // namespace Model
} // namespace Alinlp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALINLP_MODEL_GETWECHECOMREQUEST_H_
