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

#ifndef ALIBABACLOUD_DOCUMENTAUTOML_MODEL_PREDICTMODELREQUEST_H_
#define ALIBABACLOUD_DOCUMENTAUTOML_MODEL_PREDICTMODELREQUEST_H_

#include <alibabacloud/documentautoml/DocumentAutomlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace DocumentAutoml {
namespace Model {
class ALIBABACLOUD_DOCUMENTAUTOML_EXPORT PredictModelRequest : public RpcServiceRequest {
public:
	PredictModelRequest();
	~PredictModelRequest();
	std::string getBody() const;
	void setBody(const std::string &body);
	std::string getContent() const;
	void setContent(const std::string &content);
	bool getBinaryToText() const;
	void setBinaryToText(bool binaryToText);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	long getModelId() const;
	void setModelId(long modelId);
	std::string getModelVersion() const;
	void setModelVersion(const std::string &modelVersion);

private:
	std::string body_;
	std::string content_;
	bool binaryToText_;
	std::string product_;
	long modelId_;
	std::string modelVersion_;
};
} // namespace Model
} // namespace DocumentAutoml
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOCUMENTAUTOML_MODEL_PREDICTMODELREQUEST_H_
