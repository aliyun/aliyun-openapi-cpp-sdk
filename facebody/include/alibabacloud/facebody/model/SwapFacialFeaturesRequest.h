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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_SWAPFACIALFEATURESREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_SWAPFACIALFEATURESREQUEST_H_

#include <alibabacloud/facebody/FacebodyExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Facebody {
namespace Model {
class ALIBABACLOUD_FACEBODY_EXPORT SwapFacialFeaturesRequest : public RpcServiceRequest {
public:
	SwapFacialFeaturesRequest();
	~SwapFacialFeaturesRequest();
	std::string getTargetImageURL() const;
	void setTargetImageURL(const std::string &targetImageURL);
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	std::string getSourceImageData() const;
	void setSourceImageData(const std::string &sourceImageData);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	std::string getSourceImageURL() const;
	void setSourceImageURL(const std::string &sourceImageURL);
	std::string getTargetImageData() const;
	void setTargetImageData(const std::string &targetImageData);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	std::string getEditPart() const;
	void setEditPart(const std::string &editPart);

private:
	std::string targetImageURL_;
	bool formatResultToJson_;
	std::string sourceImageData_;
	std::string ossFile_;
	std::string sourceImageURL_;
	std::string targetImageData_;
	std::string requestProxyBy_;
	std::string editPart_;
};
} // namespace Model
} // namespace Facebody
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FACEBODY_MODEL_SWAPFACIALFEATURESREQUEST_H_
