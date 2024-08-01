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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBESHOWLISTRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBESHOWLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeShowListResult : public ServiceResult
			{
			public:
				struct ShowListInfo
				{
					struct Show
					{
						struct ResourceInfo
						{
							std::string resourceId;
							std::string resourceType;
							std::string resourceUrl;
							int liveInputType;
						};
						ResourceInfo resourceInfo;
						std::string showId;
						long duration;
						int repeatTimes;
						std::string showName;
					};
					std::string background;
					std::string currentShowId;
					std::string highPriorityShowId;
					std::string highPriorityShowStartTime;
					int totalShowListRepeatTimes;
					std::string watermark;
					int showListRepeatTimes;
					std::vector<Show> showList;
				};


				DescribeShowListResult();
				explicit DescribeShowListResult(const std::string &payload);
				~DescribeShowListResult();
				ShowListInfo getShowListInfo()const;
				std::string getShowList()const;

			protected:
				void parse(const std::string &payload);
			private:
				ShowListInfo showListInfo_;
				std::string showList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBESHOWLISTRESULT_H_