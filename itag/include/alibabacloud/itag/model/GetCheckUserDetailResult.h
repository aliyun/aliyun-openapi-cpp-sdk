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

#ifndef ALIBABACLOUD_ITAG_MODEL_GETCHECKUSERDETAILRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_GETCHECKUSERDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/itag/ItagExport.h>

namespace AlibabaCloud
{
	namespace Itag
	{
		namespace Model
		{
			class ALIBABACLOUD_ITAG_EXPORT GetCheckUserDetailResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ITagMarkResultReport
					{
						std::string taskId;
						std::string bizClassify;
						int sampledReject;
						int checkReject;
						long noRejectAudio;
						double markTime;
						int noRejectMark;
						int totalMark;
						int totalSampling;
						int samplingReject;
						double sampledAccuracy;
						int totalDisable;
						double markEfficiency;
						long totalPDF;
						double checkTime;
						double checkedAccuracy;
						int samplingFix;
						int checkedReject;
						std::string userName;
						int sample;
						std::string workflow;
						long noRejectPDF;
						double checkEfficiency;
						int checkedError;
						std::string workTime;
						int totalSampled;
						double samplingAccuracy;
						int totalCheck;
						long totalAudio;
						std::string taskName;
						long totalVideo;
						std::string userId;
						int checkedFix;
						std::string updateTime;
						int samplingError;
						int checkFix;
						long noRejectVideo;
						int sampledFix;
						int totalChecked;
						int checkError;
						double checkAccuracy;
						int sampledError;
						int noRejectCheck;
					};
					long pageNum;
					long pageSize;
					long totalPage;
					long total;
					std::vector<ITagMarkResultReport> list;
				};


				GetCheckUserDetailResult();
				explicit GetCheckUserDetailResult(const std::string &payload);
				~GetCheckUserDetailResult();
				std::string getMsg()const;
				bool getSucc()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				std::string getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				bool succ_;
				std::string errorCode_;
				std::string errInfo_;
				std::string code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_GETCHECKUSERDETAILRESULT_H_