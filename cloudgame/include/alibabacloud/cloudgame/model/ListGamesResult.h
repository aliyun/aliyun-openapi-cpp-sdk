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

#ifndef ALIBABACLOUD_CLOUDGAME_MODEL_LISTGAMESRESULT_H_
#define ALIBABACLOUD_CLOUDGAME_MODEL_LISTGAMESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudgame/CloudgameExport.h>

namespace AlibabaCloud
{
	namespace Cloudgame
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDGAME_EXPORT ListGamesResult : public ServiceResult
			{
			public:
				struct DataListItem
				{
					std::string status;
					std::string frameRate;
					std::string inputType;
					std::string device;
					std::string gameName;
					std::string installPath;
					std::string curVersion;
					std::string savePath;
					std::string gameId;
					std::string resolution;
				};


				ListGamesResult();
				explicit ListGamesResult(const std::string &payload);
				~ListGamesResult();
				std::vector<DataListItem> getDataList()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::string getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataListItem> dataList_;
				int pageSize_;
				int currentPage_;
				std::string count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDGAME_MODEL_LISTGAMESRESULT_H_