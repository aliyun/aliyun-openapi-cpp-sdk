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

#ifndef ALIBABACLOUD_ALINLP_MODEL_GETOPENNLUREQUEST_H_
#define ALIBABACLOUD_ALINLP_MODEL_GETOPENNLUREQUEST_H_

#include <alibabacloud/alinlp/AlinlpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alinlp {
namespace Model {
class ALIBABACLOUD_ALINLP_EXPORT GetOpenNLURequest : public RpcServiceRequest {
public:
	GetOpenNLURequest();
	~GetOpenNLURequest();
	std::string getSentence() const;
	void setSentence(const std::string &sentence);
	std::string getBusiness() const;
	void setBusiness(const std::string &business);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::string getTask() const;
	void setTask(const std::string &task);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	std::string getExamples() const;
	void setExamples(const std::string &examples);

private:
	std::string sentence_;
	std::string business_;
	std::string labels_;
	std::string task_;
	std::string serviceCode_;
	std::string examples_;
};
} // namespace Model
} // namespace Alinlp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALINLP_MODEL_GETOPENNLUREQUEST_H_
