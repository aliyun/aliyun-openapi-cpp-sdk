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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_CREATEASYNCPREDICTREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_CREATEASYNCPREDICTREQUEST_H_

#include <alibabacloud/nlp-automl/Nlp_automlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlp_automl {
namespace Model {
class ALIBABACLOUD_NLP_AUTOML_EXPORT CreateAsyncPredictRequest : public RpcServiceRequest {
public:
	CreateAsyncPredictRequest();
	~CreateAsyncPredictRequest();
	int getTopK() const;
	void setTopK(int topK);
	std::string getFileType() const;
	void setFileType(const std::string &fileType);
	std::string getDetailTag() const;
	void setDetailTag(const std::string &detailTag);
	std::string getFetchContent() const;
	void setFetchContent(const std::string &fetchContent);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getFileContent() const;
	void setFileContent(const std::string &fileContent);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	int getModelId() const;
	void setModelId(int modelId);
	std::string getServiceVersion() const;
	void setServiceVersion(const std::string &serviceVersion);
	std::string getFileUrl() const;
	void setFileUrl(const std::string &fileUrl);
	std::string getModelVersion() const;
	void setModelVersion(const std::string &modelVersion);

private:
	int topK_;
	std::string fileType_;
	std::string detailTag_;
	std::string fetchContent_;
	std::string content_;
	std::string fileContent_;
	std::string serviceName_;
	std::string product_;
	int modelId_;
	std::string serviceVersion_;
	std::string fileUrl_;
	std::string modelVersion_;
};
} // namespace Model
} // namespace Nlp_automl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_CREATEASYNCPREDICTREQUEST_H_
