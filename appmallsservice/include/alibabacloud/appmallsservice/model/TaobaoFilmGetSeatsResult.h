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

#ifndef ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETSEATSRESULT_H_
#define ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETSEATSRESULT_H_

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
			class ALIBABACLOUD_APPMALLSSERVICE_EXPORT TaobaoFilmGetSeatsResult : public ServiceResult
			{
			public:
				struct SeatMap
				{
					struct SeatsItem
					{
						long leftPx;
						long status;
						std::string area;
						long column;
						std::string extId;
						long row;
						long flag;
						long topPx;
						std::string name;
						std::string rowName;
					};
					long maxRow;
					bool regular;
					long soldCount;
					long minRow;
					long maxTopPx;
					long minColumn;
					long maxCanBuy;
					long maxColumn;
					long minLeftPx;
					std::vector<SeatsItem> seats;
					long maxLeftPx;
					long seatCount;
					std::string notice;
					long minTopPx;
					std::string tipMessage;
				};


				TaobaoFilmGetSeatsResult();
				explicit TaobaoFilmGetSeatsResult(const std::string &payload);
				~TaobaoFilmGetSeatsResult();
				std::string getMsg()const;
				std::string getSubMsg()const;
				std::string getLogsId()const;
				std::string getErrorCode()const;
				SeatMap getSeatMap()const;
				std::string getSubCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string subMsg_;
				std::string logsId_;
				std::string errorCode_;
				SeatMap seatMap_;
				std::string subCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMGETSEATSRESULT_H_