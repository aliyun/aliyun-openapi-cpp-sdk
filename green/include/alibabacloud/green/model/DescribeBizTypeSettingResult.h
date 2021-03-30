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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEBIZTYPESETTINGRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEBIZTYPESETTINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeBizTypeSettingResult : public ServiceResult
			{
			public:
				struct Terrorism
				{
					std::vector<std::string> categories;
				};
				struct Porn
				{
					std::vector<std::string> categories1;
				};
				struct Antispam
				{
					std::vector<std::string> categories2;
				};
				struct Ad
				{
					std::vector<std::string> categories3;
				};
				struct Live
				{
					std::vector<std::string> categories4;
				};


				DescribeBizTypeSettingResult();
				explicit DescribeBizTypeSettingResult(const std::string &payload);
				~DescribeBizTypeSettingResult();
				Antispam getAntispam()const;
				Ad getAd()const;
				Terrorism getTerrorism()const;
				Live getLive()const;
				Porn getPorn()const;

			protected:
				void parse(const std::string &payload);
			private:
				Antispam antispam_;
				Ad ad_;
				Terrorism terrorism_;
				Live live_;
				Porn porn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEBIZTYPESETTINGRESULT_H_