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

#ifndef ALIBABACLOUD_CDRS_MODEL_RECALLTRAJECTORYBYCOORDINATEREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_RECALLTRAJECTORYBYCOORDINATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT RecallTrajectoryByCoordinateRequest : public RpcServiceRequest
			{
			public:
				struct PointList
				{
					float latitude;
					float longitude;
				};

			public:
				RecallTrajectoryByCoordinateRequest();
				~RecallTrajectoryByCoordinateRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::vector<PointList> getPointList()const;
				void setPointList(const std::vector<PointList>& pointList);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				int getDeltaDistance()const;
				void setDeltaDistance(int deltaDistance);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::vector<std::string> getOutputIdTypeList()const;
				void setOutputIdTypeList(const std::vector<std::string>& outputIdTypeList);
				int getDeltaTime()const;
				void setDeltaTime(int deltaTime);
				int getOutputIdCount()const;
				void setOutputIdCount(int outputIdCount);

            private:
				std::string corpId_;
				std::vector<PointList> pointList_;
				std::string endTime_;
				int deltaDistance_;
				std::string startTime_;
				std::vector<std::string> outputIdTypeList_;
				int deltaTime_;
				int outputIdCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_RECALLTRAJECTORYBYCOORDINATEREQUEST_H_