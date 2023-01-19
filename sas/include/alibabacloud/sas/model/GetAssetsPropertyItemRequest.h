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

#ifndef ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYITEMREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYITEMREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT GetAssetsPropertyItemRequest : public RpcServiceRequest {
public:
	GetAssetsPropertyItemRequest();
	~GetAssetsPropertyItemRequest();
	std::string getSearchItem() const;
	void setSearchItem(const std::string &searchItem);
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	bool getForceFlush() const;
	void setForceFlush(bool forceFlush);
	std::string getSearchInfo() const;
	void setSearchInfo(const std::string &searchInfo);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);

private:
	std::string searchItem_;
	std::string biz_;
	std::string sourceIp_;
	int pageSize_;
	std::string lang_;
	bool forceFlush_;
	std::string searchInfo_;
	int currentPage_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYITEMREQUEST_H_
