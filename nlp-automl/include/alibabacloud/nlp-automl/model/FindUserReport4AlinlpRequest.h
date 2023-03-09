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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_FINDUSERREPORT4ALINLPREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_FINDUSERREPORT4ALINLPREQUEST_H_

#include <alibabacloud/nlp-automl/Nlp_automlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlp_automl {
namespace Model {
class ALIBABACLOUD_NLP_AUTOML_EXPORT FindUserReport4AlinlpRequest : public RpcServiceRequest {
public:
	FindUserReport4AlinlpRequest();
	~FindUserReport4AlinlpRequest();
	long getCustomerUserParentId() const;
	void setCustomerUserParentId(long customerUserParentId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getBeginTime() const;
	void setBeginTime(const std::string &beginTime);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getModelType() const;
	void setModelType(const std::string &modelType);

private:
	long customerUserParentId_;
	std::string endTime_;
	std::string beginTime_;
	std::string type_;
	std::string modelType_;
};
} // namespace Model
} // namespace Nlp_automl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_FINDUSERREPORT4ALINLPREQUEST_H_
