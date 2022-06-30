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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_ADDFACEREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_ADDFACEREQUEST_H_

#include <alibabacloud/facebody/FacebodyExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Facebody {
namespace Model {
class ALIBABACLOUD_FACEBODY_EXPORT AddFaceRequest : public RpcServiceRequest {
public:
	AddFaceRequest();
	~AddFaceRequest();
	std::string getEntityId() const;
	void setEntityId(const std::string &entityId);
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	float getQualityScoreThreshold() const;
	void setQualityScoreThreshold(float qualityScoreThreshold);
	float getSimilarityScoreThresholdBetweenEntity() const;
	void setSimilarityScoreThresholdBetweenEntity(float similarityScoreThresholdBetweenEntity);
	std::string getExtraData() const;
	void setExtraData(const std::string &extraData);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	float getSimilarityScoreThresholdInEntity() const;
	void setSimilarityScoreThresholdInEntity(float similarityScoreThresholdInEntity);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);

private:
	std::string entityId_;
	bool formatResultToJson_;
	float qualityScoreThreshold_;
	float similarityScoreThresholdBetweenEntity_;
	std::string extraData_;
	std::string ossFile_;
	float similarityScoreThresholdInEntity_;
	std::string requestProxyBy_;
	std::string dbName_;
	std::string imageUrl_;
};
} // namespace Model
} // namespace Facebody
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FACEBODY_MODEL_ADDFACEREQUEST_H_
