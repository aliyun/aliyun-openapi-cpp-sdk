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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_PAGEQUERYWHITELISTSETTINGRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_PAGEQUERYWHITELISTSETTINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT PageQueryWhiteListSettingResult : public ServiceResult
			{
			public:
				struct ResultObjectItem
				{
					long sceneId;
					std::string status;
					std::string validEndDate;
					std::string gmtCreate;
					std::string validStartDate;
					std::string serviceCode;
					std::string certifyId;
					std::string gmtModified;
					long id;
					std::string certNo;
					std::string remark;
				};


				PageQueryWhiteListSettingResult();
				explicit PageQueryWhiteListSettingResult(const std::string &payload);
				~PageQueryWhiteListSettingResult();
				std::vector<ResultObjectItem> getResultObject()const;
				int getTotalItem()const;
				std::string getMessage()const;
				int getTotalPage()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultObjectItem> resultObject_;
				int totalItem_;
				std::string message_;
				int totalPage_;
				int pageSize_;
				int currentPage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_PAGEQUERYWHITELISTSETTINGRESULT_H_