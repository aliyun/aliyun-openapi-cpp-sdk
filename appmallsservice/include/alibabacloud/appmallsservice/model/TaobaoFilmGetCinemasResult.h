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

#ifndef ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETCINEMASRESULT_H_
#define ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETCINEMASRESULT_H_

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
			class ALIBABACLOUD_APPMALLSSERVICE_EXPORT TaobaoFilmGetCinemasResult : public ServiceResult
			{
			public:
				struct CinemasItem
				{
					std::string cinemaName;
					std::string address;
					long cityId;
					std::string regionName;
					std::string phone;
					std::string latitude;
					std::string standardId;
					long id;
					std::string longitude;
					long scheduleCloseTime;
				};


				TaobaoFilmGetCinemasResult();
				explicit TaobaoFilmGetCinemasResult(const std::string &payload);
				~TaobaoFilmGetCinemasResult();
				std::string getMsg()const;
				std::string getSubMsg()const;
				long getTotalCount()const;
				std::string getLogsId()const;
				std::string getErrorCode()const;
				std::string getSubCode()const;
				std::vector<CinemasItem> getCinemas()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string subMsg_;
				long totalCount_;
				std::string logsId_;
				std::string errorCode_;
				std::string subCode_;
				std::vector<CinemasItem> cinemas_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETCINEMASRESULT_H_