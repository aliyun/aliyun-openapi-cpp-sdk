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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_QUERYFACEIMAGETEMPLATEREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_QUERYFACEIMAGETEMPLATEREQUEST_H_

#include <alibabacloud/facebody/FacebodyExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Facebody {
namespace Model {
class ALIBABACLOUD_FACEBODY_EXPORT QueryFaceImageTemplateRequest : public RpcServiceRequest {
public:
	QueryFaceImageTemplateRequest();
	~QueryFaceImageTemplateRequest();
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	long getPageNo() const;
	void setPageNo(long pageNo);

private:
	bool formatResultToJson_;
	std::string userId_;
	long pageSize_;
	std::string ossFile_;
	std::string templateId_;
	std::string requestProxyBy_;
	long pageNo_;
};
} // namespace Model
} // namespace Facebody
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FACEBODY_MODEL_QUERYFACEIMAGETEMPLATEREQUEST_H_
