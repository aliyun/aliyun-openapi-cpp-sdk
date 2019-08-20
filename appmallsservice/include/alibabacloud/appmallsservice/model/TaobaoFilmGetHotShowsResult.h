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

#ifndef ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETHOTSHOWSRESULT_H_
#define ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETHOTSHOWSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/appmallsservice/AppMallsServiceExport.h>

namespace AlibabaCloud
{
	namespace AppMallsService
	{
		namespace Model
		{
			class ALIBABACLOUD_APPMALLSSERVICE_EXPORT TaobaoFilmGetHotShowsResult : public ServiceResult
			{
			public:
				struct ShowsItem
				{
					std::vector<std::string> showVersionList;
					std::string backgroundPicture;
					std::string description;
					std::string highlight;
					std::string leadingRole;
					std::string director;
					long duration;
					std::string showName;
					std::string showMark;
					std::string remark;
					std::string openTime;
					std::string type;
					std::string language;
					std::string poster;
					std::string country;
					std::string showNameEn;
					long id;
					std::vector<std::string> trailerList;
					std::string openDay;
				};


				TaobaoFilmGetHotShowsResult();
				explicit TaobaoFilmGetHotShowsResult(const std::string &payload);
				~TaobaoFilmGetHotShowsResult();
				std::string getMsg()const;
				std::string getSubMsg()const;
				std::vector<ShowsItem> getShows()const;
				std::string getLogsId()const;
				std::string getErrorCode()const;
				std::string getSubCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string subMsg_;
				std::vector<ShowsItem> shows_;
				std::string logsId_;
				std::string errorCode_;
				std::string subCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETHOTSHOWSRESULT_H_