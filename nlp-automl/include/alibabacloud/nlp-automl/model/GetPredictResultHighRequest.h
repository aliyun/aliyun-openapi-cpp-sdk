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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_GETPREDICTRESULTHIGHREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_GETPREDICTRESULTHIGHREQUEST_H_

#include <alibabacloud/nlp-automl/Nlp_automlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlp_automl {
namespace Model {
class ALIBABACLOUD_NLP_AUTOML_EXPORT GetPredictResultHighRequest : public RpcServiceRequest {
public:
	GetPredictResultHighRequest();
	~GetPredictResultHighRequest();
	int getTopK() const;
	void setTopK(int topK);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	int getModelId() const;
	void setModelId(int modelId);
	std::string getDetailTag() const;
	void setDetailTag(const std::string &detailTag);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getModelVersion() const;
	void setModelVersion(const std::string &modelVersion);

private:
	int topK_;
	std::string product_;
	int modelId_;
	std::string detailTag_;
	std::string content_;
	std::string modelVersion_;
};
} // namespace Model
} // namespace Nlp_automl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_GETPREDICTRESULTHIGHREQUEST_H_
