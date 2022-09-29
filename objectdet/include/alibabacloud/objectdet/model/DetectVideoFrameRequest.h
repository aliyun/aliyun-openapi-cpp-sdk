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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOFRAMEREQUEST_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOFRAMEREQUEST_H_

#include <alibabacloud/objectdet/ObjectdetExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Objectdet {
namespace Model {
class ALIBABACLOUD_OBJECTDET_EXPORT DetectVideoFrameRequest : public RpcServiceRequest {
public:
	DetectVideoFrameRequest();
	~DetectVideoFrameRequest();
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	std::vector<std::string> getFeatures() const;
	void setFeatures(const std::vector<std::string> &features);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	long getHeight() const;
	void setHeight(long height);
	long getCreateTime() const;
	void setCreateTime(long createTime);
	std::string getFeatureConfig() const;
	void setFeatureConfig(const std::string &featureConfig);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	std::string getStreamArn() const;
	void setStreamArn(const std::string &streamArn);
	std::string getImageURL() const;
	void setImageURL(const std::string &imageURL);
	long getWidth() const;
	void setWidth(long width);

private:
	bool formatResultToJson_;
	std::vector<std::string> features_;
	std::string ossFile_;
	long height_;
	long createTime_;
	std::string featureConfig_;
	long ownerId_;
	std::string requestProxyBy_;
	std::string streamArn_;
	std::string imageURL_;
	long width_;
};
} // namespace Model
} // namespace Objectdet
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOFRAMEREQUEST_H_
