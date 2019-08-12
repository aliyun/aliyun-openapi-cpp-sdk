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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENSETTINGRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENSETTINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeScreenSettingResult : public ServiceResult
			{
			public:


				DescribeScreenSettingResult();
				explicit DescribeScreenSettingResult(const std::string &payload);
				~DescribeScreenSettingResult();
				bool getLogoPower()const;
				std::string getMonitorUrl()const;
				int getScreenId()const;
				std::string getLogoUrl()const;
				std::string getScreenDataMap()const;
				std::string getTitle()const;
				int getScreenDefault()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool logoPower_;
				std::string monitorUrl_;
				int screenId_;
				std::string logoUrl_;
				std::string screenDataMap_;
				std::string title_;
				int screenDefault_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENSETTINGRESULT_H_