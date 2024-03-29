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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_GETASYNCPREDICTREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_GETASYNCPREDICTREQUEST_H_

#include <alibabacloud/nlp-automl/Nlp_automlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlp_automl {
namespace Model {
class ALIBABACLOUD_NLP_AUTOML_EXPORT GetAsyncPredictRequest : public RpcServiceRequest {
public:
	GetAsyncPredictRequest();
	~GetAsyncPredictRequest();
	std::string getProduct() const;
	void setProduct(const std::string &product);
	int getAsyncPredictId() const;
	void setAsyncPredictId(int asyncPredictId);

private:
	std::string product_;
	int asyncPredictId_;
};
} // namespace Model
} // namespace Nlp_automl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_GETASYNCPREDICTREQUEST_H_
